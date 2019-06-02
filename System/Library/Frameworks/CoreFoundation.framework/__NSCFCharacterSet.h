/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)bitmapRepresentation;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(void)removeCharactersInString:(id)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(id)invertedSet;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
@end
