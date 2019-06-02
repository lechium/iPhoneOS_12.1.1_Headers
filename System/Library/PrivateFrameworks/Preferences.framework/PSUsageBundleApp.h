/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSWeakReference, NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	PSWeakReference* _storageReporterReference;
	BOOL _deletionRestricted;
	float _totalSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;

}

@property (assign,nonatomic,__weak) id<PSStorageReporting> usageBundleStorageReporter; 
@property (nonatomic,retain) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                                  //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isDeletionRestricted,nonatomic) BOOL deletionRestricted;                   //@synthesize deletionRestricted=_deletionRestricted - In the implementation block
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setUsageBundleStorageReporter:(id<PSStorageReporting>)arg1 ;
-(id<PSStorageReporting>)usageBundleStorageReporter;
-(BOOL)isDeletionRestricted;
-(void)setDeletionRestricted:(BOOL)arg1 ;
-(float)totalSize;
-(void)setTotalSize:(float)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSArray *)categories;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

