/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface ICDocCamDocumentInfoCollection : NSObject {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _uniqueIdentifier;
	NSMutableArray* _docInfos;

}

@property (nonatomic,readonly) long long docCamPDFVersion; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                 //@synthesize docInfos=_docInfos - In the implementation block
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(long long)docCamPDFVersion;
-(NSMutableArray *)docInfos;
-(void)bumpModificationDate;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
@end
