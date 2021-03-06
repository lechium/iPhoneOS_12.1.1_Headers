/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/SymptomsFileCleanerDelegate.h>

@class SymptomsFileCleaner, NSString;

@interface CacheDeleteServiceImpl : NSObject <SymptomsFileCleanerDelegate> {

	SymptomsFileCleaner* _abcCleaner;

}

@property (nonatomic,retain) SymptomsFileCleaner * abcCleaner;              //@synthesize abcCleaner=_abcCleaner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerCallbacks:(const char*)arg1 ;
+(id)sharedInstance;
-(void)fileCleanupComplete;
-(void)registerCallbacks:(const char*)arg1 ;
-(id)_purgeable:(id)arg1 urgency:(int)arg2 amount:(unsigned long long*)arg3 justLRU:(BOOL)arg4 ;
-(id)replyCacheDeleteDictionaryWithVolume:(id)arg1 amount:(unsigned long long)arg2 ;
-(void)purgeFiles:(id)arg1 ;
-(void)setAbcCleaner:(SymptomsFileCleaner *)arg1 ;
-(id)cacheDeletePurgeableWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePurgeWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePeriodicWithInfo:(CFDictionaryRef)arg1 ;
-(SymptomsFileCleaner *)abcCleaner;
@end

