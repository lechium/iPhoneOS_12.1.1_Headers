/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface OITSUPointerSet : NSSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(void)getObjects:(id*)arg1 ;
-(id)initWithCFSet:(CFSetRef)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
@end

