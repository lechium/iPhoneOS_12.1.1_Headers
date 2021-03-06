/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition, NSArray;

@interface RTTDictionaryManager : NSObject {

	NSCondition* _condition;
	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(BOOL)downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(NSArray *)availableDictionaries;
-(id)init;
-(void)dealloc;
-(BOOL)_isStalledAutoDownloadAsset:(id)arg1 ;
@end

