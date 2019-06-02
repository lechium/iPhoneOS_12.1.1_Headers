/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(id)allValues;
-(unsigned long long)count;
-(id)objectForKey:(long long)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForKey:(long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
@end

