/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSMutableDictionary, NSString, RUIStyle, NSDictionary;

@interface RUIElement : NSObject {

	NSMutableDictionary* _attributes;
	BOOL _enabled;
	NSString* _identifier;
	RUIStyle* _style;
	NSString* _body;
	RUIElement* _parent;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) RUIElement * parent;              //@synthesize parent=_parent - In the implementation block
-(id)sourceURL;
-(void)configureView:(id)arg1 ;
-(id)_ruielement_staticValues;
-(id)staticValues;
-(id)_ruielement_staticFunctions;
-(id)staticFunctions;
-(OpaqueJSClassRef)_JSClass;
-(OpaqueJSValueRef)JSValueForContext:(OpaqueJSContextRef)arg1 ;
-(id)pageElement;
-(void)performAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(id)subElementWithID:(id)arg1 ;
-(id)subElementsWithName:(id)arg1 ;
-(void)performAction:(int)arg1 forElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2 ;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(id)mutableAttributes;
-(void)populatePostbackDictionary:(id)arg1 ;
-(BOOL)loadImage;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasImage;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(BOOL)enabled;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(RUIElement *)parent;
@end

