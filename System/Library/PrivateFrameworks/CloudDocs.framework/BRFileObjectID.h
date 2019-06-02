/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSString, NSNumber;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>

@property (nonatomic,readonly) NSString * asString; 
@property (nonatomic,readonly) BOOL isFolderOrAliasID; 
@property (nonatomic,readonly) BOOL isDocumentID; 
@property (nonatomic,readonly) NSNumber * folderID; 
@property (nonatomic,readonly) NSNumber * documentID; 
@property (nonatomic,readonly) unsigned long long rawID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2 error:(id*)arg3 ;
+(id)fileObjectIDWithString:(id)arg1 ;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)asString;
-(NSNumber *)documentID;
-(NSNumber *)folderID;
-(BOOL)isEqualToFileObjectID:(id)arg1 ;
-(BOOL)isFolderOrAliasID;
-(BOOL)isDocumentID;
-(unsigned long long)rawID;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

