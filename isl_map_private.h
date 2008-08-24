#include "isl_set.h"
#include "isl_map.h"

int isl_basic_map_alloc_equality(struct isl_ctx *ctx,
		struct isl_basic_map *bmap);
int isl_basic_set_alloc_equality(struct isl_ctx *ctx,
		struct isl_basic_set *bset);
int isl_basic_map_free_equality(struct isl_ctx *ctx,
		struct isl_basic_map *bmap, unsigned n);
int isl_basic_set_alloc_inequality(struct isl_ctx *ctx,
		struct isl_basic_set *bset);
int isl_basic_map_alloc_inequality(struct isl_ctx *ctx,
		struct isl_basic_map *bmap);
int isl_basic_map_free_inequality(struct isl_ctx *ctx,
		struct isl_basic_map *bmap, unsigned n);
int isl_basic_map_alloc_div(struct isl_ctx *ctx,
		struct isl_basic_map *bmap);
int isl_basic_map_free_div(struct isl_ctx *ctx,
		struct isl_basic_map *bmap, unsigned n);
void isl_basic_map_inequality_to_equality(struct isl_ctx *ctx,
		struct isl_basic_map *bmap, unsigned pos);

int isl_inequality_negate(struct isl_ctx *ctx,
		struct isl_basic_map *bmap, unsigned pos);

struct isl_basic_set *isl_basic_set_cow(struct isl_ctx *ctx,
		struct isl_basic_set *bset);
struct isl_basic_map *isl_basic_map_cow(struct isl_ctx *ctx,
		struct isl_basic_map *bmap);
struct isl_map *isl_map_cow(struct isl_ctx *ctx, struct isl_map *map);

struct isl_basic_map *isl_basic_map_set_to_empty(
		struct isl_ctx *ctx, struct isl_basic_map *bmap);
struct isl_basic_set *isl_basic_set_set_to_empty(
		struct isl_ctx *ctx, struct isl_basic_set *bset);
struct isl_map *isl_basic_map_compute_divs(struct isl_ctx *ctx,
		struct isl_basic_map *bmap);
struct isl_map *isl_map_compute_divs(struct isl_ctx *ctx, struct isl_map *map);
struct isl_basic_map *isl_basic_map_align_divs(struct isl_ctx *ctx,
		struct isl_basic_map *dst, struct isl_basic_map *src);
struct isl_basic_map *isl_basic_map_gauss(struct isl_ctx *ctx,
	struct isl_basic_map *bmap, int *progress);
struct isl_basic_set *isl_basic_set_gauss(struct isl_ctx *ctx,
	struct isl_basic_set *bset, int *progress);

struct isl_map *isl_map_remove_empty_parts(struct isl_ctx *ctx,
	struct isl_map *map);
struct isl_set *isl_set_remove_empty_parts(struct isl_ctx *ctx,
	struct isl_set *set);
