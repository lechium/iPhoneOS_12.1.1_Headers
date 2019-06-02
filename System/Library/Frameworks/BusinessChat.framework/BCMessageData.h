/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary, NSArray;

@interface BCMessageData : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _jsonDictionary;
	NSDictionary* _replyMessageDictionary;
	NSDictionary* _receivedMessageDictionary;

}

@property (nonatomic,retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * jsonDictionary;                         //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * replyMessageDictionary;                 //@synthesize replyMessageDictionary=_replyMessageDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * receivedMessageDictionary;              //@synthesize receivedMessageDictionary=_receivedMessageDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * combinedDictionary; 
@property (nonatomic,readonly) NSArray * imagesArray; 
-(NSDictionary *)jsonDictionary;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
-(void)decodeData:(id)arg1 dictionaryKey:(id)arg2 ;
-(NSDictionary *)replyMessageDictionary;
-(NSDictionary *)receivedMessageDictionary;
-(void)setReplyMessageDictionary:(NSDictionary *)arg1 ;
-(void)setReceivedMessageDictionary:(NSDictionary *)arg1 ;
-(id)initWithUrl:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)combinedDictionary;
-(NSArray *)imagesArray;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
