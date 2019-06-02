/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(BOOL)arg2 ;
-(void)p_setupNamesList;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(unsigned)maxKey;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
@end
