/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSArray;

@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList {

	NSArray* _plists;

}
+(BOOL)supportsSecureCoding;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithLazyPropertyLists:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

