/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@class NSString;

@interface FRArticleRecirculationComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	 documentControllerProvider;
	 type;
	 role;

}

@property (copy,nonatomic) NSString * type; 
@property (assign,nonatomic) int role; 
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3 ;
-(void)setRole:(int)arg1 ;
-(int)role;
-(id)init;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

