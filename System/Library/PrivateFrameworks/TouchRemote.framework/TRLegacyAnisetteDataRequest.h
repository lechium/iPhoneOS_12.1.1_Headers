/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage {

	NSString* _dsid;

}

@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

