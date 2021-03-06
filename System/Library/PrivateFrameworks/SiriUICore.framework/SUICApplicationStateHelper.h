/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class BKSApplicationStateMonitor, NSMutableArray, NSObject, NSString;

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableArray* _foregroundAppInfos;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)_updateForAppInfoDictionaries:(id)arg1 ;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)foregroundAppInfos;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
@end

