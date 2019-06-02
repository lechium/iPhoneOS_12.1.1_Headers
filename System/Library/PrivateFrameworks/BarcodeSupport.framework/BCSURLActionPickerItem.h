/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BCSActionPickerItem.h>

@protocol BCSCodePayload;
@class NSURL, LSApplicationProxy, LSAppLink;

@interface BCSURLActionPickerItem : BCSActionPickerItem {

	NSURL* _url;
	LSApplicationProxy* _applicationProxy;
	LSAppLink* _appLink;
	id<BCSCodePayload> _codePayload;

}

@property (nonatomic,readonly) LSAppLink * appLink;                         //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,readonly) id<BCSCodePayload> codePayload;              //@synthesize codePayload=_codePayload - In the implementation block
-(id)actionURL;
-(void)performAction;
-(id<BCSCodePayload>)codePayload;
-(id)targetApplicationBundleIdentifier;
-(void)performActionWithFBOptions:(id)arg1 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationProxy:(id)arg4 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 ;
-(LSAppLink *)appLink;
@end

