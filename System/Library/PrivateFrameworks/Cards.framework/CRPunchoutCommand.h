/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@class SFPunchout, NSString, NSDictionary;

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand> {

	SFPunchout* _punchout;

}

@property (nonatomic,retain) SFPunchout * punchout;                              //@synthesize punchout=_punchout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
@end

