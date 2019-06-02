/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKBundleLoadObserverDelegate.h>

@class NSMutableDictionary, HKBundleLoadObserver, NSString;

@interface HKPPTPluginManager : NSObject <HKBundleLoadObserverDelegate> {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;
	HKBundleLoadObserver* _bundleLoadObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPluginManager;
-(id)_internalPluginsPath;
-(void)_loadPPTBundles;
-(void)_loadPPTBundleAtPath:(id)arg1 ;
-(void)bundleLoadObserver:(id)arg1 loadedClass:(Class)arg2 bundle:(id)arg3 ;
-(id)builtinTests;
-(Class)classForTestType:(id)arg1 ;
-(id)init;
@end

