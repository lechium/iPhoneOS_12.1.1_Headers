/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNActionable.h>
#import <libobjc.A.dylib/SCNBoundingVolume.h>
#import <UIKit/UIFocusItem.h>

@class NSArray, NSMutableArray, SCNNodeComponent, SCNOrderedDictionary, NSMutableDictionary, NSString, SCNLight, SCNCamera, SCNGeometry, SCNSkinner, SCNMorpher, SCNPhysicsBody, SCNPhysicsField, UIView;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume, UIFocusItem> {

	_C3DNode* _node;
	SCNNode* _parent;
	NSMutableArray* _childNodes;
	SCNNode* _presentationInstance;
	unsigned _isPresentationInstance : 1;
	unsigned _lightLoaded : 1;
	unsigned _geometryLoaded : 1;
	unsigned _cameraLoaded : 1;
	unsigned _skinnerLoaded : 1;
	unsigned _morpherLoaded : 1;
	unsigned _paused : 1;
	unsigned _pausedByInheritance : 1;
	unsigned _affineUpToDate : 1;
	unsigned _transformUpToDate : 1;
	unsigned _hasPivot : 1;
	unsigned _isJoint : 1;
	unsigned _rotationRepresentation : 2;
	unsigned _movability : 1;
	unsigned _hidden : 1;
	unsigned _castsShadow : 1;
	unsigned _ignoreAnimationWhenCopying_tmp : 1;
	unsigned _focusBehavior : 2;
	unsigned _isFocusableOrHasFocusableChild : 1;
	unsigned _authoringEnvironmentNode : 1;
	unsigned _hasComponentBitmask : 11;
	SCD_Struct_SC14 _transform;
	 _position;
	SCD_Union_SC104 _rotation;
	 _scale;
	float _opacity;
	unsigned long long _categoryBitMask;
	long long _renderingOrder;
	SCNNodeComponent* _components;
	SCNOrderedDictionary* _actions;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	SCNVector3* _fixedBoundingBoxExtrema;
	NSString* _name;
	NSMutableDictionary* _valueForKey;
	id _rendererDelegate;

}

@property (nonatomic,readonly) SCNVector3 worldUp; 
@property (nonatomic,readonly) SCNVector3 worldRight; 
@property (nonatomic,readonly) SCNVector3 worldFront; 
@property (assign,nonatomic) SCD_Struct_SC14 simdTransform; 
@property (assign,nonatomic)  simdPosition; 
@property (assign,nonatomic)  simdRotation; 
@property (assign,nonatomic) SCD_Struct_SC16 simdOrientation; 
@property (assign,nonatomic)  simdEulerAngles; 
@property (assign,nonatomic)  simdScale; 
@property (assign,nonatomic) SCD_Struct_SC14 simdPivot; 
@property (assign,nonatomic)  simdWorldPosition; 
@property (assign,nonatomic) SCD_Struct_SC16 simdWorldOrientation; 
@property (assign,nonatomic) SCD_Struct_SC14 simdWorldTransform; 
@property (nonatomic,readonly)  simdWorldUp; 
@property (nonatomic,readonly)  simdWorldRight; 
@property (nonatomic,readonly)  simdWorldFront; 
@property (assign,nonatomic) long long authoringCameraType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SCNLight * light; 
@property (nonatomic,retain) SCNCamera * camera; 
@property (nonatomic,retain) SCNGeometry * geometry; 
@property (nonatomic,retain) SCNSkinner * skinner; 
@property (nonatomic,retain) SCNMorpher * morpher; 
@property (assign,nonatomic) SCNMatrix4 transform; 
@property (nonatomic,readonly) SCNMatrix4 worldTransform; 
@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 worldPosition; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) SCNVector4 orientation; 
@property (assign,nonatomic) SCNVector4 worldOrientation; 
@property (assign,nonatomic) SCNVector3 eulerAngles; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) SCNMatrix4 pivot; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) long long renderingOrder; 
@property (assign,nonatomic) BOOL castsShadow; 
@property (assign,nonatomic) long long movabilityHint; 
@property (nonatomic,readonly) SCNNode * parentNode; 
@property (nonatomic,readonly) NSArray * childNodes; 
@property (nonatomic,retain) SCNPhysicsBody * physicsBody; 
@property (nonatomic,retain) SCNPhysicsField * physicsField; 
@property (copy) NSArray * constraints; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,readonly) SCNNode * presentationNode; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) id<SCNNodeRendererDelegate> rendererDelegate; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) long long focusBehavior; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
+(id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2 sceneNodes:(id)arg3 skinnedMeshes:(id)arg4 skelNodesMap:(SkelNodesMap*)arg5 options:(id)arg6 ;
+(id)nodeWithMDLObject:(id)arg1 ;
+(id)nodeWithMDLAsset:(id)arg1 ;
+(1)simdLocalFront;
+(1)simdLocalUp;
+(1)simdLocalRight;
+(id)nodeWithNodeRef:(_C3DNode*)arg1 ;
+(id)_dumpNodeTree:(id)arg1 tab:(id)arg2 ;
+(id)keyPathsForValuesAffectingPosition;
+(id)keyPathsForValuesAffectingTransform;
+(id)keyPathsForValuesAffectingRotation;
+(id)keyPathsForValuesAffectingEulerAngles;
+(id)keyPathsForValuesAffectingOrientation;
+(id)keyPathsForValuesAffectingScale;
+(SCNVector3)localUp;
+(SCNVector3)localRight;
+(SCNVector3)localFront;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)nodeWithGeometry:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)node;
-(void)dump;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setCamera:(SCNCamera *)arg1 ;
-(SCNCamera *)camera;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)_registerAsObserver;
-(id)attributeForKey:(id)arg1 ;
-(void)_updateTransform;
-(id)clone;
-(SCNMorpher *)morpher;
-(void)_addSkinnerWithMDLMesh:(id)arg1 sceneNodes:(id)arg2 ;
-(SCNLight *)light;
-(void)setLight:(SCNLight *)arg1 ;
-(void)setMorpher:(SCNMorpher *)arg1 ;
-(void)setSkinner:(SCNSkinner *)arg1 ;
-(id)_associatedMDLObject;
-(void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(BOOL)arg3 bakeAO:(BOOL)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(/*^block*/id)arg7 terminateSetter:(/*^block*/id)arg8 ;
-(_C3DNode*)nodeRef;
-(const void*)__CFObject;
-(void)setEulerAngles:(SCNVector3)arg1 ;
-(void)setRenderingOrder:(long long)arg1 ;
-(void)setSimdWorldTransform:(SCD_Struct_SC14)arg1 ;
-(void)enumerateHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(id)childNodesPassingTest:(/*^block*/id)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 toNode:(id)arg2 ;
-(C3DSceneRef)sceneRef;
-(id)flattenedCopy;
-(void)setAuthoringEnvironmentNode:(BOOL)arg1 ;
-(void)setHittable:(BOOL)arg1 ;
-(void)addAudioPlayer:(id)arg1 ;
-(id)audioPlayers;
-(void)removeAudioPlayer:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(id)particleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(void)addParticleSystem:(id)arg1 ;
-(BOOL)_isAReference;
-(void)simdLocalTranslateBy:;
-(void)simdLocalRotateBy:(SCD_Struct_SC16)arg1 ;
-(SCD_Struct_SC14)simdWorldTransform;
-()simdWorldPosition;
-(4)simdConvertVector:(id)arg1 ;
-(SCD_Struct_SC16)simdWorldOrientation;
-()simdWorldFront;
-(void)setSimdWorldOrientation:(SCD_Struct_SC16)arg1 ;
-(SCD_Struct_SC16)simdOrientation;
-(void)setSimdOrientation:(SCD_Struct_SC16)arg1 ;
-()simdWorldRight;
-(4)simdConvertPosition:(id)arg1 ;
-(4)simdConvertVector:(id)arg1 ;
-()simdWorldUp;
-(void)simdRotateBy:(SCD_Struct_SC16)arg1 ;
-(SCNVector3)worldUp;
-(void)_removeAction:(id)arg1 forKey:(id)arg2 ;
-(long long)rotationRepresentation;
-(SCNVector3)eulerAngles;
-(void)setGizmo:(BOOL)arg1 ;
-(SCNMatrix4)convertTransform:(SCNMatrix4)arg1 toNode:(id)arg2 ;
-(SCNNode *)presentationNode;
-(id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2 ;
-(BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 ;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(BOOL)castsShadow;
-(void)setCastsShadow:(BOOL)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(id)initPresentationNodeWithNodeRef:(_C3DNode*)arg1 ;
-(SCNPhysicsField *)physicsField;
-(void)_dump:(id)arg1 ;
-(SCNMatrix4)pivot;
-(void)setPivot:(SCNMatrix4)arg1 ;
-(long long)renderingOrder;
-(long long)movabilityHint;
-(void)setMovabilityHint:(long long)arg1 ;
-(id<SCNNodeRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<SCNNodeRendererDelegate>)arg1 ;
-(void)setPhysicsField:(SCNPhysicsField *)arg1 ;
-(BOOL)authoringEnvironmentNode;
-(long long)focusBehavior;
-(void)setFocusBehavior:(long long)arg1 ;
-(id)authoringEnvironmentCompanionNode;
-(void)setAuthoringEnvironmentCompanionNode:(id)arg1 ;
-(BOOL)isGizmo;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2 ;
-(SCNSkinner *)skinner;
-(id)_copyRecursively;
-(id)initWithNodeRef:(_C3DNode*)arg1 ;
-(BOOL)_childNodesPassingTest:(/*^block*/id)arg1 recursively:(BOOL)arg2 output:(id)arg3 ;
-(id)childNodesPassingTest:(/*^block*/id)arg1 recursively:(BOOL)arg2 ;
-(BOOL)_enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3 ;
-(id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2 ;
-(id)_findComponentWithType:(long long)arg1 ;
-(void)_setComponent:(id)arg1 withType:(long long)arg2 ;
-(4)simdConvertPosition:(id)arg1 ;
-(void)_updateAffine;
-()simdRotation;
-(SCD_Struct_SC16)_quaternion;
-()simdEulerAngles;
-(void)setSimdEulerAngles:;
-()simdPosition;
-(void)setSimdScale:;
-()simdScale;
-(void)setSimdRotation:;
-(void)setSimdTransform:(SCD_Struct_SC14)arg1 ;
-(SCD_Struct_SC14)simdTransform;
-(void)setSimdWorldPosition:;
-(void)setSimdPivot:(SCD_Struct_SC14)arg1 ;
-(SCD_Struct_SC14)simdPivot;
-(void)_removeComponentWithType:(long long)arg1 ;
-(void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2 ;
-(id)__light;
-(id)__skinner;
-(id)__morpher;
-(id)__camera;
-(id)__geometry;
-(void)_reSyncModelTree;
-(unsigned long long)countOfChildNodes;
-(void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(BOOL)canAddChildNode:(id)arg1 ;
-(void)_setHasFocusableChild;
-(void)_setPausedOrPausedByInheritance:(BOOL)arg1 ;
-(void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)_updateFocusableCache;
-(unsigned long long)indexOfChildNode:(id)arg1 ;
-(void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)simdGetBoundingSphereCenter:(1*)arg1 radius:(float*)arg2 ;
-(BOOL)isPresentationInstance;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(id)flattenedClone;
-(void)_focusableCandidates:(id)arg1 ;
-(BOOL)_isEffectivelyHidden;
-(BOOL)isFocusInteractionEnabled;
-(BOOL)_isEligibleForFocus;
-(void)removeActionForKey:(id)arg1 ;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeDeadParticleSystem:(C3DParticleSystemRef)arg1 ;
-(id)_particleSystems;
-(id)_audioPlayers;
-(SCD_Struct_SC14)simdConvertTransform:(SCD_Struct_SC14)arg1 toNode:(id)arg2 ;
-(SCD_Struct_SC14)simdConvertTransform:(SCD_Struct_SC14)arg1 fromNode:(id)arg2 ;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)_customEncodingOfSCNNode:(id)arg1 usePresentationInstance:(BOOL)arg2 ;
-(void)_encodeNodePropertiesWithCoder:(id)arg1 ;
-(void)_customDecodingOfSCNNode:(id)arg1 ;
-(void)_didDecodeSCNNode:(id)arg1 ;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_initChildNodesArray;
-(id)_dumpTree;
-(id)objectInChildNodesWithName:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2 ;
-(id)childNodeWithName:(id)arg1 ;
-(id)jsChildNodesWithAttribute:(id)arg1 ;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(SCNVector4)worldOrientation;
-(void)setWorldOrientation:(SCNVector4)arg1 ;
-(void)setQuaternion:(SCNVector4)arg1 ;
-(void)_setQuaternion:(SCD_Struct_SC16)arg1 ;
-(1)_euler;
-(void)setWorldPosition:(SCNVector3)arg1 ;
-(SCNVector3)worldPosition;
-(BOOL)isHittable;
-(id)mutableChildNodes;
-(BOOL)isJoint;
-(void)setIsJoint:(BOOL)arg1 ;
-(id)objectInChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)removeAllChilds;
-(void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceChildNode:(id)arg1 with:(id)arg2 ;
-(BOOL)getFrustum:(SCD_Struct_SC105*)arg1 ;
-(id)getBoundingSphere;
-(id)getBoundingBox;
-(id)_subdividedCopyWithSubdivisionLevel:(long long)arg1 ;
-(void)removeAllParticleSystems;
-(unsigned long long)countOfParticleSystems;
-(id)objectInParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inParticleSystemsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInParticleSystemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAllAudioPlayers;
-(unsigned long long)countOfAudioPlayers;
-(id)objectInAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inAudioPlayersAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInAudioPlayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(SCNVector3)convertVector:(SCNVector3)arg1 toNode:(id)arg2 ;
-(SCNVector3)convertVector:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(SCNMatrix4)convertTransform:(SCNMatrix4)arg1 fromNode:(id)arg2 ;
-(id)authoringEnvironmentPresentationNode;
-(void)setAuthoringEnvironmentPresentationNode:(id)arg1 ;
-(void)simdLookAt:;
-(void)simdLookAt:up:localFront:;
-(SCNVector3)worldRight;
-(SCNVector3)worldFront;
-(void)lookAt:(SCNVector3)arg1 ;
-(void)lookAt:(SCNVector3)arg1 up:(SCNVector3)arg2 localFront:(SCNVector3)arg3 ;
-(void)localTranslateBy:(SCNVector3)arg1 ;
-(void)localRotateBy:(SCNVector4)arg1 ;
-(void)rotateBy:(SCNVector4)arg1 aroundTarget:(SCNVector3)arg2 ;
-(void)setAuthoringCameraType:(long long)arg1 ;
-(long long)authoringCameraType;
-(id)debugQuickLookData;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)_setPosition:;
-(void)setPhysicsBody:(SCNPhysicsBody *)arg1 ;
-(SCNPhysicsBody *)physicsBody;
-(void)runAction:(id)arg1 ;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)worldTransform;
-(void)addChildNode:(id)arg1 ;
-(void)removeFromParentNode;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSimdPosition:;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SCNVector3)scale;
-(NSString *)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(BOOL)isHidden;
-(id)actions;
-(void)setHidden:(BOOL)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)setIdentifier:(id)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(NSArray *)constraints;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(BOOL)canBecomeFocused;
-(SCNMatrix4)transform;
-(void)addAnimation:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)renderInContext:(void*)arg1 ;
-(void)setScale:(SCNVector3)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(NSArray *)animationKeys;
-(void)removeAllAnimations;
-(BOOL)_isEligibleForFocusInteraction;
-(SCNVector3)position;
-(id)scene;
-(SCNGeometry *)geometry;
-(void)setGeometry:(SCNGeometry *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(SCNVector4)orientation;
-(void)_setParent:(id)arg1 ;
-(void)removeAllActions;
-(SCNVector4)rotation;
-(void)setRotation:(SCNVector4)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(id)debugQuickLookObject;
-(SCNNode *)parentNode;
-(void)setOrientation:(SCNVector4)arg1 ;
-(void)_setScale:;
-(SCNVector4)quaternion;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(BOOL)isPaused;
-(BOOL)hidden;
-(BOOL)hasActions;
-(NSArray *)childNodes;
@end
