/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNNode.h>

@class NSURL, NSMutableDictionary;

@interface SCNReferenceNode : SCNNode {

	NSURL* _referenceURL;
	BOOL _loaded;
	NSMutableDictionary* _overrides;
	long long _loadingPolicy;
	NSURL* _catalogURL;
	NSURL* _sourceDocumentURL;

}

@property (nonatomic,copy) NSURL * referenceURL; 
@property (assign,nonatomic) long long loadingPolicy;              //@synthesize loadingPolicy=_loadingPolicy - In the implementation block
@property (getter=isLoaded,readonly) BOOL loaded; 
+(id)referenceNodeWithURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(BOOL)_isNameUnique:(id)arg1 ;
-(void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3 ;
-(void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3 ;
-(void)removeAllOverrides;
-(id)_resolveURL;
-(id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2 ;
-(void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2 ;
-(void)_applyOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setLoadingPolicy:(long long)arg1 ;
-(void)_loadWithCatalog:(id)arg1 ;
-(void)_loadWithURL:(id)arg1 catalog:(id)arg2 ;
-(void)_applyOverrides;
-(void)collectOverrides;
-(void)addOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeForKeyPath:(id)arg1 ;
-(id)overrides;
-(void)setOverrides:(id)arg1 ;
-(void)setOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)_isAReference;
-(NSURL *)referenceURL;
-(void)_loadWithURL:(id)arg1 ;
-(void)unload;
-(long long)loadingPolicy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLoaded;
-(void)load;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)_catalog;
@end

