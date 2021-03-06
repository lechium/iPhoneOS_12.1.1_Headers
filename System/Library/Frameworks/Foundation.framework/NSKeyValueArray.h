/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingArrayMethodSet;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingArrayMethodSet* _methods;

}
+(id)_proxyShare;
-(SCD_Struct_NS31)_proxyLocator;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

