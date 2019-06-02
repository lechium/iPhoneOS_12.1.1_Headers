/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CRKCloudRemoteDelta : NSObject {

	NSDictionary* _changeRecordsByRecordType;
	NSDictionary* _deleteIdsByRecordType;

}

@property (nonatomic,retain) NSDictionary * changeRecordsByRecordType;                  //@synthesize changeRecordsByRecordType=_changeRecordsByRecordType - In the implementation block
@property (nonatomic,retain) NSDictionary * deleteIdsByRecordType;                      //@synthesize deleteIdsByRecordType=_deleteIdsByRecordType - In the implementation block
@property (nonatomic,readonly) NSDictionary * changeRecordIdsByRecordType; 
+(id)new;
-(NSDictionary *)deleteIdsByRecordType;
-(NSDictionary *)changeRecordIdsByRecordType;
-(NSDictionary *)changeRecordsByRecordType;
-(id)initWithChangedRecordsByRecordType:(id)arg1 deleteIdsByRecordType:(id)arg2 ;
-(void)setChangeRecordsByRecordType:(NSDictionary *)arg1 ;
-(void)setDeleteIdsByRecordType:(NSDictionary *)arg1 ;
-(id)init;
-(BOOL)isEmpty;
@end

