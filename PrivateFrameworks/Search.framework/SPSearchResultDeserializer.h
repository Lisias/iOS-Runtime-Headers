/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchResult, CPSearchMatcher, NSString, NSArray;



@interface SPSearchResultDeserializer : PBDataReader 
{
    NSUInteger _byteVector;
    NSArray *_resultOffsetVector;
    BOOL _munmapAtDealloc;
    NSUInteger _resultCount;
    NSUInteger _domain;
    NSString *_displayIdentifier;
    NSString *_category;
    CPSearchMatcher *_matcher;
    CPSearchMatcher *_diacriticMatcher;
    SPSearchResult *_sortA;
    SPSearchResult *_sortB;
}

@property(readonly) NSUInteger resultCount;
@property(readonly) NSUInteger domain;
@property(readonly) NSString *displayIdentifier;
@property(readonly) NSString *category;
@property(readonly) CPSearchMatcher *matcher;
@property(readonly) CPSearchMatcher *diacriticMatcher;
@property(readonly) SPSearchResult *sortA;
@property(readonly) SPSearchResult *sortB;


- (NSInteger)read:(const char *)arg1 maxLength:(NSUInteger)arg2;
- (id)initWithMappedRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (id)initWithSerializer:(id)arg1;
- (void)sortResultsByDate;
- (void)sortResultsUsingQueryString:(id)arg1;
- (id)initWithMallocRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (void)_prepareForRandomAccess;
- (id)sortB;
- (id)sortA;
- (id)diacriticMatcher;
- (id)matcher;
- (BOOL)readResultIntoCursor:(id)arg1;
- (id)readBytes:(NSUInteger)arg1;
- (id)displayIdentifier;
- (void)dealloc;
- (NSUInteger)resultCount;
- (BOOL)deserializeResultAtIndex:(NSUInteger)arg1 toCursor:(id)arg2;
- (id)category;
- (NSUInteger)domain;

@end