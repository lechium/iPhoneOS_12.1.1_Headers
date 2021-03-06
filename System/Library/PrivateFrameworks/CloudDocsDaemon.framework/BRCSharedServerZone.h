/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class NSString, BRCSharedClientZone;

@interface BRCSharedServerZone : BRCServerZone {

	NSString* _ownerName;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedClientZone * clientZone; 
-(BRCSharedClientZone *)clientZone;
-(BOOL)isSharedZone;
-(id)asSharedZone;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4 ;
-(BOOL)isPrivateZone;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)allocateRanks;
-(long long)_propagateDeleteToChildrenOfItemID:(id)arg1 ;
-(BOOL)_propagateFolderDeletesToTheirChildren;
-(id)ownerName;
@end

