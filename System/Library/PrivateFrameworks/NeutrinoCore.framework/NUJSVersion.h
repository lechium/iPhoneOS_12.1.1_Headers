/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUVersion;

@interface NUJSVersion : NUJSObject

@property (nonatomic,readonly) NUVersion * version; 
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithVersion:(id)arg1 context:(id)arg2 ;
-(BOOL)hasProperty:(id)arg1 ;
-(id)toString;
-(NUVersion *)version;
@end
