/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, _MXExtensionProvider;

@interface _MXExtensionServiceCenter : NSObject {

	NSObject*<OS_dispatch_queue> _extlock;
	NSDictionary* _extensions;
	NSDictionary* _mapsExtensions;
	NSDictionary* _containingAppProxies;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,copy) NSDictionary * extensions; 
@property (nonatomic,copy) NSDictionary * mapsExtensions; 
@property (nonatomic,copy) NSDictionary * containingAppProxies; 
@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(id)initWithExtensionProvider:(id)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
-(void)receivedExtensions:(id)arg1 error:(id)arg2 ;
-(id)allExtensions;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(void)_clearExtensions;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
-(void)setMapsExtensions:(NSDictionary *)arg1 ;
-(NSDictionary *)mapsExtensions;
-(void)setContainingAppProxies:(NSDictionary *)arg1 ;
-(NSDictionary *)containingAppProxies;
-(NSDictionary *)extensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
@end

