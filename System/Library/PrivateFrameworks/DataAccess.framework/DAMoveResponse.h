/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {

	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * sourceID;                               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * destID;                                 //@synthesize destID=_destID - In the implementation block
@property (nonatomic,retain) DAMessageMoveRequest * origRequest;              //@synthesize origRequest=_origRequest - In the implementation block
-(void)setDestID:(NSString *)arg1 ;
-(DAMessageMoveRequest *)origRequest;
-(NSString *)destID;
-(id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3 ;
-(void)setOrigRequest:(DAMessageMoveRequest *)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(id)description;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

