/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber;

@interface CLSAuthTree : NSObject <NSSecureCoding> {

	NSMutableDictionary* _graph;
	NSNumber* _overridingStatus;

}
+(BOOL)supportsSecureCoding;
-(void)_addNode:(id)arg1 parentStatusID:(id)arg2 ;
-(id)initWithOverridingStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3 ;
-(void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4 ;
-(long long)authStatusAtIdentifierPath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

