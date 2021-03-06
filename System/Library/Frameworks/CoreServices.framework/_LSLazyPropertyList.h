/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSDictionary * propertyList; 
+(id)lazyPropertyListWithContext:(LSContext*)arg1 unit:(unsigned)arg2 ;
+(id)lazyPropertyListWithPropertyListData:(id)arg1 ;
+(id)lazyPropertyListWithPropertyList:(id)arg1 ;
+(id)lazyPropertyListWithLazyPropertyLists:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDictionary *)propertyList;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)_filterValueFromPropertyList:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)objectsForPropertyListKeys:(id)arg1 ;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

