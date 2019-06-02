/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSpringBoardFolderStats : PBCodable <NSCopying> {

	SCD_Struct_AW24* _numberOfFoldersPerPages;
	unsigned long long _numberOfFoldersInDock;
	unsigned long long _numberOfPagesInRootFolder;
	unsigned long long _timestamp;
	unsigned long long _totalNumberOfFolders;
	unsigned long long _totalNumberOfIconsInDock;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfFolders; 
@property (assign,nonatomic) unsigned long long totalNumberOfFolders;                        //@synthesize totalNumberOfFolders=_totalNumberOfFolders - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfPagesInRootFolder; 
@property (assign,nonatomic) unsigned long long numberOfPagesInRootFolder;                   //@synthesize numberOfPagesInRootFolder=_numberOfPagesInRootFolder - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfIconsInDock; 
@property (assign,nonatomic) unsigned long long totalNumberOfIconsInDock;                    //@synthesize totalNumberOfIconsInDock=_totalNumberOfIconsInDock - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFoldersInDock; 
@property (assign,nonatomic) unsigned long long numberOfFoldersInDock;                       //@synthesize numberOfFoldersInDock=_numberOfFoldersInDock - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFoldersPerPagesCount; 
@property (nonatomic,readonly) unsigned long long* numberOfFoldersPerPages; 
-(unsigned long long)numberOfFoldersPerPagesCount;
-(void)clearNumberOfFoldersPerPages;
-(unsigned long long)numberOfFoldersPerPageAtIndex:(unsigned long long)arg1 ;
-(void)addNumberOfFoldersPerPage:(unsigned long long)arg1 ;
-(void)setTotalNumberOfFolders:(unsigned long long)arg1 ;
-(void)setHasTotalNumberOfFolders:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfFolders;
-(void)setNumberOfPagesInRootFolder:(unsigned long long)arg1 ;
-(void)setHasNumberOfPagesInRootFolder:(BOOL)arg1 ;
-(BOOL)hasNumberOfPagesInRootFolder;
-(void)setTotalNumberOfIconsInDock:(unsigned long long)arg1 ;
-(void)setHasTotalNumberOfIconsInDock:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfIconsInDock;
-(void)setNumberOfFoldersInDock:(unsigned long long)arg1 ;
-(void)setHasNumberOfFoldersInDock:(BOOL)arg1 ;
-(BOOL)hasNumberOfFoldersInDock;
-(unsigned long long*)numberOfFoldersPerPages;
-(void)setNumberOfFoldersPerPages:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)totalNumberOfFolders;
-(unsigned long long)numberOfPagesInRootFolder;
-(unsigned long long)totalNumberOfIconsInDock;
-(unsigned long long)numberOfFoldersInDock;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

