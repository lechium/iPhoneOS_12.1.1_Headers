/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class NSArray, MPMediaLibrary, NSString;

@interface MPModelLibrarySearchRequest : MPModelRequest {

	NSArray* _scopes;
	long long _maximumResultsPerScope;
	MPMediaLibrary* _mediaLibrary;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * scopes;                                //@synthesize scopes=_scopes - In the implementation block
@property (assign,nonatomic) long long maximumResultsPerScope;              //@synthesize maximumResultsPerScope=_maximumResultsPerScope - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                 //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(long long)maximumResultsPerScope;
-(NSArray *)scopes;
-(void)setScopes:(NSArray *)arg1 ;
-(void)setMaximumResultsPerScope:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end

