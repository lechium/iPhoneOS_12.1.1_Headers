/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject {

	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSString * UTI; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)fileName;
-(id)copyToFolder:(id)arg1 error:(id*)arg2 ;
-(id)moveToFolder:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)UTI;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end
