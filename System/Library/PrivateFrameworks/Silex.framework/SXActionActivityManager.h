/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionActivityManager.h>

@protocol SXActionActivityManager <NSObject>
@required
-(id)activityGroupForAction:(id)arg1;
-(id)previewActivityForAction:(id)arg1;
-(void)registerActionActivityProvider:(id)arg1 actionType:(Class)arg2;

@end


@class NSMutableDictionary, NSString;

@interface SXActionActivityManager : NSObject <SXActionActivityManager> {

	NSMutableDictionary* _activityProviders;

}

@property (nonatomic,readonly) NSMutableDictionary * activityProviders;              //@synthesize activityProviders=_activityProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)activityProviders;
-(id)activityGroupForAction:(id)arg1 ;
-(id)previewActivityForAction:(id)arg1 ;
-(id)activityProviderForAction:(id)arg1 ;
-(void)registerActionActivityProvider:(id)arg1 actionType:(Class)arg2 ;
-(id)init;
@end

