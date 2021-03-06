/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SFBrowserWindowStateData : NSObject {

	BOOL _isActiveDocumentValid;
	BOOL _isTabStateSuccessfullyLoaded;
	BOOL _needsQuickUpdate;
	long long _databaseID;
	NSString* _UUIDString;
	long long _type;
	long long _activeDocumentIndex;
	long long _activePrivateDocumentIndex;
	long long _legacyPlistFileVersion;

}

@property (assign,nonatomic) long long databaseID;                              //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSString * UUIDString;                             //@synthesize UUIDString=_UUIDString - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long activeDocumentIndex;                     //@synthesize activeDocumentIndex=_activeDocumentIndex - In the implementation block
@property (assign,nonatomic) long long activePrivateDocumentIndex;              //@synthesize activePrivateDocumentIndex=_activePrivateDocumentIndex - In the implementation block
@property (assign,nonatomic) BOOL isActiveDocumentValid;                        //@synthesize isActiveDocumentValid=_isActiveDocumentValid - In the implementation block
@property (assign,nonatomic) BOOL isTabStateSuccessfullyLoaded;                 //@synthesize isTabStateSuccessfullyLoaded=_isTabStateSuccessfullyLoaded - In the implementation block
@property (assign,nonatomic) long long legacyPlistFileVersion;                  //@synthesize legacyPlistFileVersion=_legacyPlistFileVersion - In the implementation block
@property (nonatomic,readonly) BOOL isInDatabase; 
@property (assign,nonatomic) BOOL needsQuickUpdate;                             //@synthesize needsQuickUpdate=_needsQuickUpdate - In the implementation block
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(id)dictionaryPresentation;
-(id)initWithDictionaryPresentation:(id)arg1 ;
-(long long)activeDocumentIndex;
-(long long)activePrivateDocumentIndex;
-(long long)legacyPlistFileVersion;
-(BOOL)needsQuickUpdate;
-(BOOL)isInDatabase;
-(void)setActiveDocumentIndex:(long long)arg1 ;
-(void)setActivePrivateDocumentIndex:(long long)arg1 ;
-(BOOL)isActiveDocumentValid;
-(void)setIsActiveDocumentValid:(BOOL)arg1 ;
-(BOOL)isTabStateSuccessfullyLoaded;
-(void)setIsTabStateSuccessfullyLoaded:(BOOL)arg1 ;
-(void)setLegacyPlistFileVersion:(long long)arg1 ;
-(void)setNeedsQuickUpdate:(BOOL)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)UUIDString;
@end

