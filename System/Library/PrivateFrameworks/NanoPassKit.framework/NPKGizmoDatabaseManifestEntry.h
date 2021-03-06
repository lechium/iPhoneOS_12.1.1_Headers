/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NPKGizmoDatabaseManifestEntry : NSObject {

	NSString* _uniqueID;
	NSArray* _localManifestHashes;
	NSArray* _remoteManifestHashes;

}

@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSArray * localManifestHashes;               //@synthesize localManifestHashes=_localManifestHashes - In the implementation block
@property (nonatomic,retain) NSArray * remoteManifestHashes;              //@synthesize remoteManifestHashes=_remoteManifestHashes - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSArray *)localManifestHashes;
-(NSArray *)remoteManifestHashes;
-(void)setLocalManifestHashes:(NSArray *)arg1 ;
-(void)setRemoteManifestHashes:(NSArray *)arg1 ;
-(id)description;
@end

