/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSPhysicalCirclesTemplate.h>

@protocol SKUIJSPhysicalCirclesTemplate <JSExport>
@required
-(void)afterDOMUpdate:(id)arg1;
-(void)performFinishAnimation:(id)arg1;
-(void)performResetAnimation:(id)arg1;

@end


@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {

	SKUIPhysicalCirclesTemplateDOMFeature* _feature;

}
-(id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2 ;
-(void)_performAnimationWithType:(long long)arg1 callback:(id)arg2 ;
-(void)afterDOMUpdate:(id)arg1 ;
-(void)performFinishAnimation:(id)arg1 ;
-(void)performResetAnimation:(id)arg1 ;
@end

