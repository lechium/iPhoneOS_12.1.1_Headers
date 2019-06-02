/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIContentModuleContextDelegate;
@class NSString;

@interface CCUIContentModuleContext : NSObject {

	NSString* _moduleIdentifier;
	id<CCUIContentModuleContextDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                                //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIContentModuleContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
+(id)_sharedOpenApplicationOptions;
+(id)_sharedOpenAppService;
+(BOOL)areAnimationsPermitted;
+(void)setAnimationsPermitted:(BOOL)arg1 ;
+(void)initialize;
-(NSString *)moduleIdentifier;
-(void)expandedModuleDidUpdatePreferredSize;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enqueueStatusUpdate:(id)arg1 ;
-(void)requestExpandModule;
-(void)dismissControlCenter;
-(void)dismissModule;
-(id)initWithModuleIdentifier:(id)arg1 ;
-(void)setDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
-(id<CCUIContentModuleContextDelegate>)delegate;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

