/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration> {

	void** mInlineObjects[16];
	const void* mObjects;
	long long mCount;
	long long mIndex;

}
-(id)initWithCFSet:(CFSetRef)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end

