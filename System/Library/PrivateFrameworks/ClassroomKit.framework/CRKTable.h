/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKTableEntries;
@class NSString;

@interface CRKTable : NSObject {

	id<CRKTableEntries> mEntries;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
+(id)parsableTableWithKeyValuePairs:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(id)columnLengths;
-(unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1 ;
-(NSString *)stringValue;
@end
