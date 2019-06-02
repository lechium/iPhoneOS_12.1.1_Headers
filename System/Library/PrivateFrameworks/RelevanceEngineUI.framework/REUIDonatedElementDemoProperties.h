/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class NSString, INIntent, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {

	NSString* _demoBundleIdentifier;
	INIntent* _demoIntent;
	NSString* _demoAppName;
	UIImage* _demoAppIcon;

}
+(id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4 ;
-(id)appIcon;
-(id)bundleIdentifier;
-(id)intent;
-(id)appName;
@end
