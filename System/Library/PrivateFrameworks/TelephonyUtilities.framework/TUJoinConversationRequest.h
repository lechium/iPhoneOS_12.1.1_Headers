/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSUUID, TUHandle, NSString, NSURL;

@interface TUJoinConversationRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _videoEnabled;
	BOOL _shouldSuppressInCallUI;
	BOOL _wantsStagingArea;
	BOOL _showUIPrompt;
	BOOL _uplinkMuted;
	NSSet* _remoteMembers;
	NSUUID* _UUID;
	TUHandle* _callerID;
	NSUUID* _messagesGroupUUID;
	NSString* _messagesGroupName;

}

@property (nonatomic,retain) TUHandle * callerID;                                  //@synthesize callerID=_callerID - In the implementation block
@property (nonatomic,copy) NSUUID * messagesGroupUUID;                             //@synthesize messagesGroupUUID=_messagesGroupUUID - In the implementation block
@property (nonatomic,copy) NSString * messagesGroupName;                           //@synthesize messagesGroupName=_messagesGroupName - In the implementation block
@property (assign,nonatomic) BOOL showUIPrompt;                                    //@synthesize showUIPrompt=_showUIPrompt - In the implementation block
@property (assign,getter=isUplinkMuted,nonatomic) BOOL uplinkMuted;                //@synthesize uplinkMuted=_uplinkMuted - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remoteMembers;                         //@synthesize remoteMembers=_remoteMembers - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;              //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                          //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (assign,nonatomic) BOOL wantsStagingArea;                                //@synthesize wantsStagingArea=_wantsStagingArea - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
+(id)sanitizedMembersFromMembers:(id)arg1 ;
+(id)remoteMembersFromURLComponents:(id)arg1 ;
+(id)callerIDFromURLComponents:(id)arg1 ;
+(BOOL)videoEnabledFromURLComponents:(id)arg1 ;
+(BOOL)shouldSuppressInCallUIFromURLComponents:(id)arg1 ;
+(BOOL)wantsStagingAreaFromURLComponents:(id)arg1 ;
+(id)messagesGroupUUIDFromURLComponents:(id)arg1 ;
+(id)messagesGroupNameFromURLComponents:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)queryItems;
-(void)setShowUIPrompt:(BOOL)arg1 ;
-(NSString *)messagesGroupName;
-(BOOL)isUplinkMuted;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(BOOL)shouldSuppressInCallUI;
-(BOOL)wantsStagingArea;
-(id)remoteMembersQueryItem;
-(id)callerIDQueryItem;
-(id)videoEnabledQueryItem;
-(id)shouldSuppressInCallUIQueryItem;
-(id)wantsStagingAreaQueryItem;
-(id)messagesGroupUUIDQueryItem;
-(id)messagesGroupNameQueryItem;
-(void)setWantsStagingArea:(BOOL)arg1 ;
-(id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3 ;
-(NSUUID *)messagesGroupUUID;
-(id)initWithRemoteMembers:(id)arg1 ;
-(void)setMessagesGroupUUID:(NSUUID *)arg1 ;
-(void)setCallerID:(TUHandle *)arg1 ;
-(void)setMessagesGroupName:(NSString *)arg1 ;
-(BOOL)showUIPrompt;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(NSSet *)remoteMembers;
-(TUHandle *)callerID;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setUUID:(NSUUID *)arg1 ;
@end

