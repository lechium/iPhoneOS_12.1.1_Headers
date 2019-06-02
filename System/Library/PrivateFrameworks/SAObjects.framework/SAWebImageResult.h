/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWebWebResult.h>

@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAWebAcePicture * picture; 
@property (nonatomic,copy) NSArray * thumbNails; 
+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
-(id)groupIdentifier;
-(SAWebAcePicture *)picture;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
@end

