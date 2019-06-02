/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface FPFootprint : NSObject {

	NSArray* _processes;
	NSMutableDictionary* _pidToFootprint;
	NSMutableDictionary* _memoryObjects;
	NSMutableDictionary* _sharedCache64MemoryObjects;
	NSMutableDictionary* _sharedCache32MemoryObjects;
	NSMutableDictionary* _textMemoryObjects;
	NSMutableDictionary* _linkeditMemoryObjects;
	NSMutableArray* _uniqueMemoryObjects;
	NSMutableArray* _outputFormatters;
	BOOL _earlyExit;

}

@property (readonly) NSArray * processes;              //@synthesize processes=_processes - In the implementation block
+(void)setBreakDownPhysFootprint:(BOOL)arg1 ;
+(id)_summarizedCategoriesForCategories:(id)arg1 summarize:(BOOL)arg2 outTotal:(SCD_Struct_FP1*)arg3 ;
+(id)_sortedKeysForCategories:(id)arg1 ;
+(BOOL)breakDownPhysFootprint;
+(id)installCancelHandler:(/*^block*/id)arg1 ;
-(NSArray *)processes;
-(void)cancel;
-(id)initWithProcesses:(id)arg1 ;
-(void)gatherData;
-(id)_categoriesForAllProcesses;
-(void)calculateSizes;
-(id)_getProcessListSortedByPidDesc;
-(void)_addProcess:(id)arg1 ;
-(void)_buildProcessToFootprintMap;
-(id)_getProcessListSortedByFootprint;
-(void)printVmmapLikeOutputForProcesses:(id)arg1 ;
-(id)_sharingData;
-(id)_categoriesForObjects:(id)arg1 ;
-(unsigned long long)_calculateFootprintForProcess:(id)arg1 ;
-(void)addOutputFormatter:(id)arg1 ;
-(void)printOutputVerbose:(BOOL)arg1 summarize:(BOOL)arg2 ;
@end
