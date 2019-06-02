/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCommentContent, CKDPIdentifier, CKDPDate, CKDPLikeInfo, NSString;

@interface CKDPComment : PBCodable <NSCopying> {

	CKDPCommentContent* _commentContent;
	CKDPIdentifier* _commentId;
	CKDPDate* _createdAt;
	CKDPIdentifier* _from;
	CKDPLikeInfo* _likeInfo;
	NSString* _path;

}

@property (nonatomic,readonly) BOOL hasCommentId; 
@property (nonatomic,retain) CKDPIdentifier * commentId;                       //@synthesize commentId=_commentId - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedAt; 
@property (nonatomic,retain) CKDPDate * createdAt;                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) BOOL hasFrom; 
@property (nonatomic,retain) CKDPIdentifier * from;                            //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) BOOL hasCommentContent; 
@property (nonatomic,retain) CKDPCommentContent * commentContent;              //@synthesize commentContent=_commentContent - In the implementation block
@property (nonatomic,readonly) BOOL hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;                          //@synthesize likeInfo=_likeInfo - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFrom:(CKDPIdentifier *)arg1 ;
-(BOOL)hasFrom;
-(CKDPIdentifier *)from;
-(void)setCreatedAt:(CKDPDate *)arg1 ;
-(BOOL)hasCreatedAt;
-(CKDPDate *)createdAt;
-(void)setCommentId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasCommentId;
-(CKDPIdentifier *)commentId;
-(void)setCommentContent:(CKDPCommentContent *)arg1 ;
-(BOOL)hasCommentContent;
-(CKDPCommentContent *)commentContent;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(BOOL)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(BOOL)hasPath;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

