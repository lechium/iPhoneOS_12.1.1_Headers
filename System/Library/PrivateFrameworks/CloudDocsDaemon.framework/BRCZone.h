/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCZoneRowID, BRCPQLConnection, NSMutableDictionary;


@protocol BRCZone
@property (assign,nonatomic) BOOL needsSave; 
@property (nonatomic,retain) BRCZoneRowID * dbRowID; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCPQLConnection * db; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
@required
-(BOOL)needsSave;
-(BRCZoneRowID *)dbRowID;
-(BOOL)isSharedZone;
-(NSMutableDictionary *)plist;
-(void)setDbRowID:(id)arg1;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
-(BOOL)isPrivateZone;
-(BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(BRCPQLConnection *)db;
-(void)setNeedsSave:(BOOL)arg1;

@end

