/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, ICQLink;

@interface _ICQFollowupSpecification : NSObject {

	NSDictionary* _serverDict;
	BOOL _forAccountGroup;
	BOOL _zeroAction;
	NSString* _title;
	NSString* _message;
	NSString* _altMessage;
	NSArray* _links;
	NSString* _noteTitle;
	NSString* _noteMessage;
	NSString* _altNoteMessage;
	ICQLink* _noteActivateLink;
	ICQLink* _noteClearLink;

}

@property (nonatomic,retain) NSDictionary * serverDict; 
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * altMessage;                                      //@synthesize altMessage=_altMessage - In the implementation block
@property (nonatomic,retain) NSArray * links;                                            //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSString * noteTitle;                                       //@synthesize noteTitle=_noteTitle - In the implementation block
@property (nonatomic,retain) NSString * noteMessage;                                     //@synthesize noteMessage=_noteMessage - In the implementation block
@property (nonatomic,retain) NSString * altNoteMessage;                                  //@synthesize altNoteMessage=_altNoteMessage - In the implementation block
@property (nonatomic,retain) ICQLink * noteActivateLink;                                 //@synthesize noteActivateLink=_noteActivateLink - In the implementation block
@property (nonatomic,retain) ICQLink * noteClearLink;                                    //@synthesize noteClearLink=_noteClearLink - In the implementation block
@property (assign,getter=isForAccountGroup,nonatomic) BOOL forAccountGroup;              //@synthesize forAccountGroup=_forAccountGroup - In the implementation block
@property (assign,getter=isZeroAction,nonatomic) BOOL zeroAction;                        //@synthesize zeroAction=_zeroAction - In the implementation block
+(void)clearFollowupWithController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setServerDict:(NSDictionary *)arg1 ;
-(void)setAltMessage:(NSString *)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(void)setZeroAction:(BOOL)arg1 ;
-(void)postFollowupWithController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isZeroAction;
-(void)setForAccountGroup:(BOOL)arg1 ;
-(id)followupActionForLink:(id)arg1 needsFlow:(BOOL)arg2 ;
-(ICQLink *)noteActivateLink;
-(NSString *)noteTitle;
-(NSString *)noteMessage;
-(NSString *)altNoteMessage;
-(ICQLink *)noteClearLink;
-(id)followupActionForLink:(id)arg1 ;
-(BOOL)isForAccountGroup;
-(void)setNoteTitle:(NSString *)arg1 ;
-(void)setNoteMessage:(NSString *)arg1 ;
-(void)setAltNoteMessage:(NSString *)arg1 ;
-(void)setNoteActivateLink:(ICQLink *)arg1 ;
-(void)postFollowupWithController:(id)arg1 ;
-(void)setNoteClearLink:(ICQLink *)arg1 ;
-(NSArray *)links;
-(NSString *)altMessage;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

