/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	NSString* _handoffIdentifier;
	CXHandle* _remoteHandle;
	NSDictionary* _context;

}

@property (nonatomic,copy,readonly) NSString * handoffIdentifier;                         //@synthesize handoffIdentifier=_handoffIdentifier - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                             //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,copy) CXHandle * remoteHandle;                                       //@synthesize remoteHandle=_remoteHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSString *)handoffIdentifier;
-(CXHandle *)remoteHandle;
-(id)initWithHandoffIdentifier:(id)arg1 ;
-(BOOL)isEqualToHandoffContext:(id)arg1 ;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isOutgoing;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)context;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

