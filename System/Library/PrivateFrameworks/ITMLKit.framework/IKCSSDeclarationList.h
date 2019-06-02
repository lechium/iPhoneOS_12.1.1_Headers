/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying> {

	IKMutableArray* _declarations;
	NSRange _range;

}

@property (nonatomic,readonly) IKMutableArray * declarations;              //@synthesize declarations=_declarations - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
-(id)declarationAtIndex:(unsigned long long)arg1 ;
-(IKMutableArray *)declarations;
-(void)addDeclaration:(id)arg1 ;
-(id)firstDeclaration;
-(id)lastDeclaration;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

