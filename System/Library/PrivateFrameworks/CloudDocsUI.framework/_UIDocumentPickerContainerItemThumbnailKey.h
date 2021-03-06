/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsUI/CloudDocsUI-Structs.h>
@class NSObject;

@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject {

	NSObject* _primaryKey;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) NSObject * primaryKey;              //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                       //@synthesize scale=_scale - In the implementation block
-(NSObject *)primaryKey;
-(id)initWithPrimaryKey:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(double)scale;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

