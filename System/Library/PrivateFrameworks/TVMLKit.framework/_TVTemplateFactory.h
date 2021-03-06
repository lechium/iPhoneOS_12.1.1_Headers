/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface _TVTemplateFactory : NSObject {

	NSBundle* _tvmlKitBundle;

}
-(void)_registerTemplateControllers;
-(void)_registerCustomAnimators;
-(void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(BOOL)arg3 ;
-(void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3 ;
-(id)init;
@end

