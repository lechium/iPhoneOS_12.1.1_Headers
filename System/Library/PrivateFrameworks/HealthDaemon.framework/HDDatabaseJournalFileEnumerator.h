/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDatabaseJournalFileEnumeratorTestsDelegate;
@class NSError, NSString, NSMutableArray;

@interface HDDatabaseJournalFileEnumerator : NSObject {

	long long _currentFileIndex;
	BOOL _hasLoadedFiles;
	long long _maxAllowedOpenFileHandleCount;
	long long _totalFilesCount;
	NSError* _cachedError;
	NSString* _path;
	NSMutableArray* _remainingJournalFileNames;
	NSMutableArray* _openJournalFiles;
	id<HDDatabaseJournalFileEnumeratorTestsDelegate> _unitTestDelegate;

}

@property (nonatomic,copy) NSString * path;                                                                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingJournalFileNames;                                            //@synthesize remainingJournalFileNames=_remainingJournalFileNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * openJournalFiles;                                                     //@synthesize openJournalFiles=_openJournalFiles - In the implementation block
@property (assign,nonatomic,__weak) id<HDDatabaseJournalFileEnumeratorTestsDelegate> unitTestDelegate;              //@synthesize unitTestDelegate=_unitTestDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasFiles; 
@property (nonatomic,readonly) unsigned long long totalJournalFileCount; 
@property (nonatomic,readonly) unsigned long long currentJournalFileIndex; 
@property (getter=hasMoreJournalFiles,nonatomic,readonly) BOOL moreJournalFiles; 
-(id<HDDatabaseJournalFileEnumeratorTestsDelegate>)unitTestDelegate;
-(void)setUnitTestDelegate:(id<HDDatabaseJournalFileEnumeratorTestsDelegate>)arg1 ;
-(void)closeJournalFiles;
-(void)setRemainingJournalFileNames:(NSMutableArray *)arg1 ;
-(void)setOpenJournalFiles:(NSMutableArray *)arg1 ;
-(BOOL)_updateRollingBufferIfRequiredWithError:(id*)arg1 ;
-(long long)maxAllowedOpenFileHandleCount;
-(id)_createFileHandlesForFileNames:(id)arg1 error:(id*)arg2 ;
-(id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasFiles;
-(BOOL)loadSortedJournalFilesWithError:(id*)arg1 ;
-(id)nextJournalFileWithError:(id*)arg1 ;
-(BOOL)hasMoreJournalFiles;
-(unsigned long long)totalJournalFileCount;
-(unsigned long long)currentJournalFileIndex;
-(unsigned long long)_totalOpenFileHandleCount;
-(void)setMaxAllowedOpenFileHandleCount:(long long)arg1 ;
-(NSMutableArray *)remainingJournalFileNames;
-(NSMutableArray *)openJournalFiles;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
@end

