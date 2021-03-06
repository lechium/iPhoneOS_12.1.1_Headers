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

@class TUContactsDataProvider, NSUUID, NSSet, TUHandle, NSString, NSObject;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _locallyCreated;
	TUContactsDataProvider* _contactsDataProvider;
	NSUUID* _UUID;
	NSUUID* _groupUUID;
	long long _state;
	NSSet* _participantHandles;
	NSSet* _remoteMembers;
	NSSet* _activeRemoteParticipants;
	long long _avcSessionToken;
	NSUUID* _messagesGroupUUID;
	TUHandle* _initiator;
	NSString* _messagesGroupName;
	long long _maxVideoDecodesAllowed;
	NSObject* _reportingHierarchyToken;
	NSObject* _reportingHierarchySubToken;

}

@property (nonatomic,readonly) TUContactsDataProvider * contactsDataProvider;              //@synthesize contactsDataProvider=_contactsDataProvider - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long avcSessionToken;                                    //@synthesize avcSessionToken=_avcSessionToken - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                      //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                      //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isLocallyCreated,nonatomic) BOOL locallyCreated;                  //@synthesize locallyCreated=_locallyCreated - In the implementation block
@property (nonatomic,copy) NSSet * remoteMembers;                                          //@synthesize remoteMembers=_remoteMembers - In the implementation block
@property (nonatomic,retain) NSUUID * messagesGroupUUID;                                   //@synthesize messagesGroupUUID=_messagesGroupUUID - In the implementation block
@property (nonatomic,copy) NSSet * participantHandles;                                     //@synthesize participantHandles=_participantHandles - In the implementation block
@property (nonatomic,copy) NSSet * activeRemoteParticipants;                               //@synthesize activeRemoteParticipants=_activeRemoteParticipants - In the implementation block
@property (nonatomic,retain) TUHandle * initiator;                                         //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy) NSString * messagesGroupName;                                   //@synthesize messagesGroupName=_messagesGroupName - In the implementation block
@property (assign,nonatomic) long long maxVideoDecodesAllowed;                             //@synthesize maxVideoDecodesAllowed=_maxVideoDecodesAllowed - In the implementation block
@property (nonatomic,retain) NSObject * reportingHierarchyToken;                           //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (nonatomic,retain) NSObject * reportingHierarchySubToken;                        //@synthesize reportingHierarchySubToken=_reportingHierarchySubToken - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * groupUUID;                                         //@synthesize groupUUID=_groupUUID - In the implementation block
+(id)emptyConversationWithGroupUUID:(id)arg1 ;
+(id)numberFormatter;
+(BOOL)supportsSecureCoding;
-(NSUUID *)groupUUID;
-(id)initWithUUID:(id)arg1 groupUUID:(id)arg2 ;
-(void)setParticipantHandles:(NSSet *)arg1 ;
-(void)setRemoteMembers:(NSSet *)arg1 ;
-(void)setActiveRemoteParticipants:(NSSet *)arg1 ;
-(NSString *)messagesGroupName;
-(TUContactsDataProvider *)contactsDataProvider;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(long long)avcSessionToken;
-(NSSet *)participantHandles;
-(void)setAvcSessionToken:(long long)arg1 ;
-(void)setLocallyCreated:(BOOL)arg1 ;
-(void)setInitiator:(TUHandle *)arg1 ;
-(long long)maxVideoDecodesAllowed;
-(void)setMaxVideoDecodesAllowed:(long long)arg1 ;
-(id)initiatorLocalizedName;
-(BOOL)isRepresentedByRemoteMembers:(id)arg1 ;
-(NSObject *)reportingHierarchySubToken;
-(void)setReportingHierarchySubToken:(NSObject *)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(NSUUID *)messagesGroupUUID;
-(void)setMessagesGroupUUID:(NSUUID *)arg1 ;
-(void)setMessagesGroupName:(NSString *)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(void)setReportingHierarchyToken:(NSObject *)arg1 ;
-(NSObject *)reportingHierarchyToken;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(NSSet *)activeRemoteParticipants;
-(BOOL)isLocallyCreated;
-(NSSet *)remoteMembers;
-(TUHandle *)initiator;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)displayName;
@end

