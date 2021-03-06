/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCharacteristicValueDisplayMetadata, HFCharacteristicBatchReadResponse, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject {

	HFCharacteristicValueDisplayMetadata* _displayMetadata;
	HFCharacteristicBatchReadResponse* _readResponse;
	NSDictionary* _standardResults;

}

@property (nonatomic,readonly) HFCharacteristicValueDisplayMetadata * displayMetadata;              //@synthesize displayMetadata=_displayMetadata - In the implementation block
@property (nonatomic,readonly) HFCharacteristicBatchReadResponse * readResponse;                    //@synthesize readResponse=_readResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * standardResults;                                      //@synthesize standardResults=_standardResults - In the implementation block
-(NSDictionary *)standardResults;
-(HFCharacteristicBatchReadResponse *)readResponse;
-(HFCharacteristicValueDisplayMetadata *)displayMetadata;
-(id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3 ;
@end

