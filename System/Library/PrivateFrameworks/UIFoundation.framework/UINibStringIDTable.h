/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned long long hashMask;
	unsigned long long count;

}
-(BOOL)lookupKey:(id)arg1 identifier:(long long*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(long long)count;
@end
