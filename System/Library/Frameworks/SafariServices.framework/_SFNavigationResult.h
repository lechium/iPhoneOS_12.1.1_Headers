/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationProxy, NSURL, LSAppLink;

@interface _SFNavigationResult : NSObject {

	LSApplicationProxy* _externalApplication;
	long long _externalApplicationCategory;
	long long _type;
	NSURL* _URL;
	LSAppLink* _appLink;

}

@property (nonatomic,readonly) BOOL appliesOneTimeUserInitiatedActionPolicy; 
@property (nonatomic,readonly) LSApplicationProxy * externalApplication;                  //@synthesize externalApplication=_externalApplication - In the implementation block
@property (nonatomic,readonly) long long externalApplicationCategory;                     //@synthesize externalApplicationCategory=_externalApplicationCategory - In the implementation block
@property (nonatomic,readonly) BOOL isRedirectToAppStore; 
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) LSAppLink * appLink;                                       //@synthesize appLink=_appLink - In the implementation block
+(id)resultOfLoadingRequest:(id)arg1 isMainFrame:(BOOL)arg2 disallowRedirectToExternalApps:(BOOL)arg3 preferredApplicationBundleIdentifier:(id)arg4 ;
+(id)resultOfType:(long long)arg1 withURL:(id)arg2 ;
+(id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2 ;
+(id)resultWithAppLink:(id)arg1 ;
-(LSApplicationProxy *)externalApplication;
-(BOOL)appliesOneTimeUserInitiatedActionPolicy;
-(long long)externalApplicationCategory;
-(BOOL)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3 ;
-(BOOL)isRedirectToAppStore;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4 ;
-(long long)type;
-(NSURL *)URL;
-(LSAppLink *)appLink;
@end
